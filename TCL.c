Enter password: ****
Welcome to the MySQL monitor.  Commands end with ; or \g.
Your MySQL connection id is 32
Server version: 8.0.31 MySQL Community Server - GPL

Copyright (c) 2000, 2022, Oracle and/or its affiliates.

Oracle is a registered trademark of Oracle Corporation and/or its
affiliates. Other names may be trademarks of their respective
owners.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

mysql> use restaurant;
Database changed
mysql> select * from customer;
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| c_id | first_name | last_name | date      | time_in | time_out | address                                                                   |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| 1234 | Ayush      | Panchal   | 3/10/2022 | 5:00    | 5:12     | 175, Nanubhai Desai Rd, Sicka Nagar, Khetwadi                             |
| 3619 | Rahul      | Nadar     | 3/10/2022 | 6:51    | 7:38     | 432, Lal Marg Rd, Sector 6, Sanpada                                       |
| 5678 | Samay      | Mehta     | 4/10/2022 | 5:29    | 6:02     | 9, Amar Indl.estate, A.k.road, Opp.lathia Rubber,sakinaka, Andheri (west) |
| 9987 | Pranjal    | Parmar    | 3/10/2022 | 6:59    | 7:42     | 201, Shwetabh Marg Rd, Sector 7, Vashi                                    |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
4 rows in set (0.00 sec)

mysql> start transaction;
Query OK, 0 rows affected (0.00 sec)

mysql> insert into customer values(2703,'Rohit','Sharma','4/10/2022','5:15','6:01','Room 901, Signia Oceans, Plot-82, Sector 3, Ghansoli');
Query OK, 1 row affected (0.00 sec)

mysql> commit;
Query OK, 0 rows affected (0.00 sec)

mysql> select * from customer;
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| c_id | first_name | last_name | date      | time_in | time_out | address                                                                   |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| 1234 | Ayush      | Panchal   | 3/10/2022 | 5:00    | 5:12     | 175, Nanubhai Desai Rd, Sicka Nagar, Khetwadi                             |
| 2703 | Rohit      | Sharma    | 4/10/2022 | 5:15    | 6:01     | Room 901, Signia Oceans, Plot-82, Sector 3, Ghansoli                      |
| 3619 | Rahul      | Nadar     | 3/10/2022 | 6:51    | 7:38     | 432, Lal Marg Rd, Sector 6, Sanpada                                       |
| 5678 | Samay      | Mehta     | 4/10/2022 | 5:29    | 6:02     | 9, Amar Indl.estate, A.k.road, Opp.lathia Rubber,sakinaka, Andheri (west) |
| 9987 | Pranjal    | Parmar    | 3/10/2022 | 6:59    | 7:42     | 201, Shwetabh Marg Rd, Sector 7, Vashi                                    |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
5 rows in set (0.00 sec)

mysql> start transaction;
Query OK, 0 rows affected (0.00 sec)

mysql> insert into customer values(2359,'Rahul','Singh','3/10/2022','5:22','6:33','Room 202, Ajay CHS, Sector 8A, Airoli');
Query OK, 1 row affected (0.00 sec)

mysql> select * from customer;
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| c_id | first_name | last_name | date      | time_in | time_out | address                                                                   |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| 1234 | Ayush      | Panchal   | 3/10/2022 | 5:00    | 5:12     | 175, Nanubhai Desai Rd, Sicka Nagar, Khetwadi                             |
| 2359 | Rahul      | Singh     | 3/10/2022 | 5:22    | 6:33     | Room 202, Ajay CHS, Sector 8A, Airoli                                     |
| 2703 | Rohit      | Sharma    | 4/10/2022 | 5:15    | 6:01     | Room 901, Signia Oceans, Plot-82, Sector 3, Ghansoli                      |
| 3619 | Rahul      | Nadar     | 3/10/2022 | 6:51    | 7:38     | 432, Lal Marg Rd, Sector 6, Sanpada                                       |
| 5678 | Samay      | Mehta     | 4/10/2022 | 5:29    | 6:02     | 9, Amar Indl.estate, A.k.road, Opp.lathia Rubber,sakinaka, Andheri (west) |
| 9987 | Pranjal    | Parmar    | 3/10/2022 | 6:59    | 7:42     | 201, Shwetabh Marg Rd, Sector 7, Vashi                                    |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
6 rows in set (0.00 sec)

mysql> rollback;
Query OK, 0 rows affected (0.00 sec)

mysql> select * from customerl
    -> ;
ERROR 1146 (42S02): Table 'restaurant.customerl' doesn't exist
mysql> select * from customer;
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| c_id | first_name | last_name | date      | time_in | time_out | address                                                                   |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| 1234 | Ayush      | Panchal   | 3/10/2022 | 5:00    | 5:12     | 175, Nanubhai Desai Rd, Sicka Nagar, Khetwadi                             |
| 2703 | Rohit      | Sharma    | 4/10/2022 | 5:15    | 6:01     | Room 901, Signia Oceans, Plot-82, Sector 3, Ghansoli                      |
| 3619 | Rahul      | Nadar     | 3/10/2022 | 6:51    | 7:38     | 432, Lal Marg Rd, Sector 6, Sanpada                                       |
| 5678 | Samay      | Mehta     | 4/10/2022 | 5:29    | 6:02     | 9, Amar Indl.estate, A.k.road, Opp.lathia Rubber,sakinaka, Andheri (west) |
| 9987 | Pranjal    | Parmar    | 3/10/2022 | 6:59    | 7:42     | 201, Shwetabh Marg Rd, Sector 7, Vashi                                    |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
5 rows in set (0.00 sec)

mysql> savepoint stable1;
Query OK, 0 rows affected (0.00 sec)

mysql> insert into customer values(2759,'Arjun','Singhania','3/10/2022','5:21','6:34','Room 204, Arun CHS, Sector 9, Airoli');
Query OK, 1 row affected (0.00 sec)

mysql> rollback to stable1;
Query OK, 0 rows affected (0.45 sec)

mysql> select * from customer;
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| c_id | first_name | last_name | date      | time_in | time_out | address                                                                   |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
| 1234 | Ayush      | Panchal   | 3/10/2022 | 5:00    | 5:12     | 175, Nanubhai Desai Rd, Sicka Nagar, Khetwadi                             |
| 2703 | Rohit      | Sharma    | 4/10/2022 | 5:15    | 6:01     | Room 901, Signia Oceans, Plot-82, Sector 3, Ghansoli                      |
| 3619 | Rahul      | Nadar     | 3/10/2022 | 6:51    | 7:38     | 432, Lal Marg Rd, Sector 6, Sanpada                                       |
| 5678 | Samay      | Mehta     | 4/10/2022 | 5:29    | 6:02     | 9, Amar Indl.estate, A.k.road, Opp.lathia Rubber,sakinaka, Andheri (west) |
| 9987 | Pranjal    | Parmar    | 3/10/2022 | 6:59    | 7:42     | 201, Shwetabh Marg Rd, Sector 7, Vashi                                    |
+------+------------+-----------+-----------+---------+----------+---------------------------------------------------------------------------+
5 rows in set (0.00 sec)

mysql>
