# Pthread
simple pthread exercise with C

![image](https://user-images.githubusercontent.com/86057499/149612129-93dacaee-8199-4017-8506-63afef6a011a.png)

## gcc compile with pthread
```
gcc -pthread -o pthreadsimple pthreadsimple.c
```

```
ubuntu@ip-xxx-xx-xx-xx:~/programming$ ./pthreadsimple
0pthread_create retruns 0
pthread_create returns 0
Thread 2
Thread 1
thread1 returns: 100
thread2 returns: 100

````
_____________________________________
```
gcc -pthread -o pthreadsimple3 pthreadsimple3.c

```

```
ubuntu@ip-xxx-xx-xx-xx:~/programming$ ./pthreadsimple3
Thread1 start
Thread1 end
thread1 returns: 100
Thread2 start
Thread2 end


````
