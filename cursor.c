Enter password: ****
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 12
Server version: 8.0.27 MySQL Community Server - GPL

Copyright (c) 2000, 2021, Oracle and/or its affiliates.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

mysql> use restaurant;
Database changed
mysql> desc customer;
+------------+--------------+------+-----+---------+-------+
| Field      | Type         | Null | Key | Default | Extra |
+------------+--------------+------+-----+---------+-------+
| c_id       | int          | NO   | PRI | NULL    |       |
| first_name | varchar(20)  | YES  |     | NULL    |       |
| last_name  | varchar(20)  | YES  |     | NULL    |       |
| date       | varchar(20)  | YES  |     | NULL    |       |
| time_in    | varchar(20)  | YES  |     | NULL    |       |
| time_out   | varchar(20)  | YES  |     | NULL    |       |
| address    | varchar(150) | YES  |     | NULL    |       |
+------------+--------------+------+-----+---------+-------+
7 rows in set (0.00 sec)

mysql> select * from customer;
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| c_id | first_name | last_name | date      | time_in | time_out | address                                                                   |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| 1234 | Ayush      | Panchal   | 3/10/2022 | 4:23    | 5:12     | 175, Nanubhai Desai Rd, Sicka Nagar, Khetwadi                             |
| 3619 | Rahul      | Nadar     | 3/10/2022 | 6:51    | 7:38     | 432, Lal Marg Rd, Sector 6, Sanpada                                       |
| 5678 | Samay      | Mehta     | 4/10/2022 | 5:29    | 6:02     | 9, Amar Indl.estate, A.k.road, Opp.lathia Rubber,sakinaka, Andheri (west) |
| 9987 | Pranjal    | Parmar    | 3/10/2022 | 6:53    | 7:42     | 201, Shwetabh Marg Rd, Sector 7, Vashi                                    |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
4 rows in set (0.00 sec)

mysql> delimiter $$
mysql> create procedure mycurdemo(id int)
    -> begin
    -> declare name varchar(50);
    -> declare curl cursor for select first_name from customer where c_id=id;
    -> open curl;
    -> fetch curl into name;
    -> select name;
    -> close curl;
    -> end $$
Query OK, 0 rows affected (0.49 sec)

mysql> delimiter ;
mysql> call mycurdemo(1234)
    -> ;
+-------+
| name  |
+-------+
| Ayush |
+-------+
1 row in set (0.09 sec)

Query OK, 0 rows affected (0.09 sec)

mysql>
