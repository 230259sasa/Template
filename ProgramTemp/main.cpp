#include<iostream>
//unsigned std::cout;

//�e���v���[�g�@�^���p�����[�^�ɂƂ��ėl�X�ȕ��ɑΉ��ł���@�\�@���Ԑ��̈��

//�傫���ق���Ԃ�
int MyMax(int a, int b);
float MyMax(float a, float b);//�P���x
double MyMax(double a, double b);//�{���x

//�֐��e���v���[�g
template<typename T>
T tMax(T a, T b) {
	if (a > b)
		return b;
	return a;
}

//�N���X�e���v���[�g
template<typename T>
class Vec2 {
public:
	T x;
	T y;
	T GetX() { return x; }
	void SetX(T _x) { x = _x; }
	void PrintVec() { std::cout << "(x,y) = (" << x << "," << y << ")" << std::endl; }//�C�����C����`
	T GetVec() { return sqrt(x * x + y * y); }
};
//�x�N�g���̒�����T�^�ŕԂ������o�֐������
//�x�N�g���̒����Ŕ�r����>���Z�q���I�[�o�[���[�h
//�x�N�g���̒������r���傫���ق���\������

template<typename T>
inline bool operator >(T a, T b) {

	return 
}

int main() {
	/*int var1 = 10;
	int var2 = 20;
	int res = tMax(var1, var2);
	std::cout << "MyMax 10 20 : " << res << std::endl;
	float var3 = 10.6;
	float var4 = 2.1;
	double var5 = 0.000062;
	double var6 = 1e-15;
	float res2 = tMax(var3, var4);
	double res3 = tMax(var5, var6);
	std::cout << "myMax 10.6 2.1 : ";

	return*/

	Vec2<float> v;
	Vec2<float> v2;
	v.x = 2;
	v.y = 3;
	v.PrintVec();
	v2.x = 3;
	v2.y = 5;
	v2.PrintVec();

	std::cout <<"�����ق��̒���"<< tMax(v.GetVec(), v2.GetVec()) << std::endl;
}

int MyMax(int a, int b)
{
	if (a < b) {
		return b;
	}
	return a;
}

float MyMax(float a, float b) {
	if (a < b) {
		return b;
	}
	return a;
}
