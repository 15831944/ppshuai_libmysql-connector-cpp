# ppshuai_libmysql-connector-cpp

# linux build


build docs: https://dev.mysql.com/doc/connector-cpp/8.0/en/connector-cpp-installation-source-cpp.html

sudo yum install cmake3

sudo yum install openssl openssl-devel

0.git clone https://github.com/mysql/mysql-connector-cpp.git

1.cd mysql-connector-cpp

2.sudo mkdir build

3.cd build

4.sudo cmake3 -DBUILD_STATIC=ON -DCMAKE_INSTALL_PREFIX=/usr .. --config Release

5.sudo cmake3 --build . --config Release

6.sudo cmake3 --build . --target install --config Release

7.sudo cp /usr/lib64/debug/libmysqlcppconn8-static.a /usr/lib64/libmysqlcppconn8-static.a -f

8.sudo cp /usr/lib64/debug/libmysqlcppconn8-static.a -f