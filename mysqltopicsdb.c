#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql.h>


int main(){

//structurs provided for mysql topics

MYSQL *conn;
MYSQL_RES *res; 
MYSQL_ROW row;
conn = mysql_init(NULL);
if (conn == NULL) {
    fprintf(stderr, "mysql_init() failed\n");
    return EXIT_FAILURE;
}

if(mysql_real_connect(conn, "localhost", "root","password","tflmentoringdb",0,NULL,0) == NULL) {
    fprintf(stderr, "mysql_real_connect() failed\n");
    mysql_close(conn);
    return EXIT_FAILURE;
}
int id;
char title[100];
char url[200];
int RepositoryId;

printf("Enter ID: ");
scanf("%d", &id);
printf("Enter Title: ");
scanf(" %[^\n]", title);  // to read string with spaces
printf("Enter URL: ");
scanf(" %[^\n]", url);
printf("RepositoryId: ");
scanf("%d", &RepositoryId);

// create query string
char query[500];
sprintf(query, "INSERT INTO topics (id, title, url,RepositoryId) VALUES (%d, '%s', '%s',%d)", id, title, url, RepositoryId);

// execute query
if (mysql_query(conn, query)) {
    fprintf(stderr, "INSERT failed. Error: %s\n", mysql_error(conn));
    mysql_close(conn);
    return EXIT_FAILURE;
} else {
    printf("Inserted successfully!\n");
}


//SQL query to create a table
//SELCT * from topics;
if (mysql_query(conn, "SELECT * FROM topics")) {
    fprintf(stderr, "SELECT * FROM topics failed. Error: %s\n", mysql_error(conn));
    mysql_close(conn);
    return EXIT_FAILURE;
}

//retrive the result set
res = mysql_store_result(conn);

while((row = mysql_fetch_row(res)) != NULL) {
    printf("\n ID: %s, Title: %s, URL: %s, RepositoryId: %s\n", row[0], row[1], row[2],row[3]);
}

//clean up
mysql_free_result(res);
mysql_close(conn);
return EXIT_SUCCESS;
}


//gcc .\mysqltopicsdb.c -o db.exe -I "C:\Program Files\MySQL\MySQL Server 8.0\include" -L "C:\Program Files\MySQL\MySQL Server 8.0\lib" -l libmysql
    