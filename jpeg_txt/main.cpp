#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream write;
	ifstream read;
	write.open("1.jpg", ios::app);                //用ios::app不会覆盖文件内容
	//write定义：write(const _Elem * _Str, streamsize _Count)
	//往同路径下的1.jpg文件尾添加长度为count 的字符串Str
	write.write("halo world", 10);
	write.close();
	//read.read()
	return 0;
}


//读取
