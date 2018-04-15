# LFTP
## (hard-wired local command logging patch)
### Usage
```sh
$ lftp 
lftp :~> !rm -rf ~/dir
lftp :~> !command2
bash: command2: command not found
lftp :~> !test
lftp :~> !echo test123
test123
lftp :~> exit
$ cat ~/.lftplog 
[2018-04-15 05:28:09] rm -rf ~/dir
[2018-04-15 05:28:11] command2
[2018-04-15 05:28:17] test
[2018-04-15 05:28:25] echo test123
```

### Installation from source
```sh
git clone https://github.com/classmember/lftp.git
cd lftp
./bootstrap
./configure
make
make install
```
