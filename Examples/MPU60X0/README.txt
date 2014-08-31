MPU-6050的Arduino库和应用示例。
均为github中软件项目(不得不佩服自己--找到了神殿，到底我错过了多少美好？！！！)。

mpu6050_davedarko
-------------------
https://github.com/davedarko/mpu6050
没有使用类的形式封装，而是采用全局函数，如：
MPU6050_read
MPU6050_write
MPU6050_write_reg

将其.cpp和.h文件与Arduino文件(.ino文件)放在同一目录下，编译成功(mpu_playground_example示例)。
串口输出为
MPU-6050
Read accel, temp and gyro, error = 0
accel x,y,z: 392, 476, 16016
temperature: 31.612 degrees Celsius
322, 26, -308,

 
MPU6050_jar
-------------------
https://github.com/jarzebski/Arduino-MPU6050
采用类封装的形式，实现MPU-6050的很多接口，如时钟源设置和读取、睡眠模式使能、读取温度和陀螺仪校准和读取，
加速度值读取等。因此，库的接口的可读性和可用性都比较好，值得推荐和研究学习。


MPU6050_jrow
-------------------
https://github.com/jrowberg/i2cdevlib
MPU6050只是该项目的传感器之一，基于I2C设备库的衍生库。
同样使用了类封装的形式，相比jarzebski的Arduino-MPU6050，多出来很多接口，这些神人真的会让我这种菜鸟
级知难而返吗。看来，我绝不能轻视软件的力量，硬件能不能活，软件功不可没。
