#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream write;
	ifstream read;
	write.open("1.jpg", ios::app);                //��ios::app���Ḳ���ļ�����
	//write���壺write(const _Elem * _Str, streamsize _Count)
	//��ͬ·���µ�1.jpg�ļ�β��ӳ���Ϊcount ���ַ���Str
	write.write("halo world", 10);
	write.close();
	//read.read()
	return 0;
}


//��ȡ
