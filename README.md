# 📁 DB-Connection+

**DB-Connection+** is a collection of basic programs demonstrating how to connect to a MySQL database using four popular programming languages: **C**, **C++**, **Java**, and **C#**. The examples cover:

* Establishing a database connection
* Executing a sample query (e.g., `SELECT * FROM your_table`)
* Handling and displaying the results

---

## 🗂️ Supported Languages

| Language | Connector Used      | File Extension |
| -------- | ------------------- | -------------- |
| C        | MySQL C API         | `.c`           |
| C++      | MySQL Connector/C++ | `.cpp`         |
| Java     | JDBC                | `.java`        |
| C#       | MySQL Connector/NET | `.cs`          |

---

## 📁 Folder Structure

```
DB-Connection+/
│
├── C/                  # MySQL C API example
│   └── db_connection.c
│
├── C++/                # MySQL Connector/C++ example
│   └── db_connection.cpp
│
├── Java/               # JDBC example
│   └── DBConnection.java
│
├── CSharp/             # Connector/NET (.NET Framework or .NET Core)
│   └── DBConnection.cs
│
├── README.md           # This documentation
└── SQL/
    └── sample.sql      # Example SQL script to create/test the database
```

---

## 🧰 Prerequisites

### 📌 Common

* MySQL Server (Running on `localhost`)
* User credentials (update in each file)

### 📌 Language-Specific

#### 🔹 C (MySQL C API)

* `libmysqlclient` library
* Compile:

  ```bash
  gcc db_connection.c -o dbconn `mysql_config --cflags --libs`
  ```

#### 🔹 C++ (Connector/C++)

* MySQL Connector/C++
* g++ compiler
* Compile:

  ```bash
  g++ db_connection.cpp -o dbconn -lmysqlcppconn
  ```

#### 🔹 Java (JDBC)

* JDK 8 or higher
* MySQL JDBC Connector (`mysql-connector-java-<version>.jar`)
* Compile & Run:

  ```bash
  javac -cp .:mysql-connector-java-<version>.jar DBConnection.java
  java -cp .:mysql-connector-java-<version>.jar DBConnection
  ```

#### 🔹 C# (Connector/NET)

* .NET Core SDK / Visual Studio
* MySql.Data NuGet package:

  ```bash
  dotnet add package MySql.Data
  dotnet run
  ```

---

## ⚙️ Configuration

Update the connection parameters in each file:

```text
host:       localhost
user:       root
password:   your_password
database:   your_database
```

---

## 📜 Example SQL Table

Use the following SQL to create a sample table:

```sql
CREATE DATABASE IF NOT EXISTS testdb;
USE testdb;

CREATE TABLE IF NOT EXISTS users (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100),
    email VARCHAR(100)
);

INSERT INTO users (name, email) VALUES ('John Doe', 'john@example.com');
```

---

## 🔗 Useful Documentation Links

* 🔹 [MySQL C API Documentation](https://dev.mysql.com/doc/c/)
* 🔹 [MySQL Connector/C++](https://dev.mysql.com/doc/connector-cpp/en/)
* 🔹 [JDBC API (Java)](https://docs.oracle.com/javase/8/docs/technotes/guides/jdbc/)
* 🔹 [MySQL Connector/NET (C#)](https://dev.mysql.com/doc/connector-net/en/)

---

## 🎯 Purpose

This repository helps beginners understand how different languages handle:

* Database drivers/connectors
* Connection setup and teardown
* Query execution
* Result iteration and error handling

---

## 📃 License

This project is open-source and available under the [MIT License](LICENSE).

---

## 🙌 Contributing

Feel free to fork the project and submit pull requests for:

* Additional language support
* Error handling improvements
* More complex queries (INSERT, UPDATE, DELETE)

---

## 👨‍💻 Author

**Nikhil Navale**
Feel free to connect for suggestions or queries!
