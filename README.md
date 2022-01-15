# Pthread
simple pthread exercise with C

![image](https://user-images.githubusercontent.com/86057499/149612129-93dacaee-8199-4017-8506-63afef6a011a.png)

## gcc compile with pthread
### pthreadsimple.c
```
$gcc -pthread -o pthreadsimple pthreadsimple.c
ubuntu@ip-xxx-xx-xx-xx:~/programming$ ./pthreadsimple
0pthread_create retruns 0
pthread_create returns 0
Thread 2
Thread 1
thread1 returns: 100
thread2 returns: 100

````
_____________________________________

### pthreadsimple3.c

```
$gcc -pthread -o pthreadsimple3 pthreadsimple3.c
ubuntu@ip-xxx-xx-xx-xx:~/programming$ ./pthreadsimple3
Thread1 start
Thread1 end
thread1 returns: 100
Thread2 start
Thread2 end

````
_____________________________________

### pthreadsimple4.c
```
$gcc -pthread -o pthreadsimple4 pthreadsimple4.c
ubuntu@ip-xxx-xx-xx-xx:~/programming$ ./pthreadsimple4
Thread2 start
Thread1 start
Thread2 end
thread2 returns: 100
Thread1 end

````
_____________________________________

### pthreadmutex.c
```
$gcc -pthread -o pthreadmutex pthreadmutex.c
ubuntu@ip-xxx-xx-xx-xx:~/programming$ ./pthreadmutex
Thread2 start
Thread2, g_count = 10000000
Thread1 start
Thread1, g_count = 20000000

````
