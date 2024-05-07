#include<iostream>
//unsigned std::cout;

//テンプレート　型をパラメータにとって様々な方に対応できる機能　多態性の一つ

//大きいほうを返す
int MyMax(int a, int b);
float MyMax(float a, float b);//単制度
double MyMax(double a, double b);//倍精度

//関数テンプレート
template<typename T>
T tMax(T a, T b) {
	if (a < b)
		return b;
	return a;
}

//クラステンプレート
template<typename T>
class Vec2 {
public:
	T x;
	T y;
	T GetX() { return x; }
	void SetX(T _x) { x = _x; }
	void PrintVec() { std::cout << "(x,y) = (" << x << "," << y << ")" << std::endl; }//インライン定義
	T Length() { return sqrt(x * x + y * y); }
};
//ベクトルの長さをT型で返すメンバ関数を作る
//ベクトルの長さで比較する>演算子をオーバーロード
//ベクトルの長さを比較し大きいほうを表示する


inline bool operator >(Vec2<float> a,Vec2<float> b) {
	if (a.Length() > b.Length())
		return true;
	return false;
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

	if (v > v2) {
		std::cout << "1のほうが長い" << std::endl;
		std::cout << "長さ" << v.Length() << std::endl;
	}
	else {
		std::cout << "2のほうが長い" << std::endl;
		std::cout << "長さ" << v2.Length() << std::endl;
	}

	std::cout <<"長いほうの長さ"<< tMax(v.Length(), v2.Length()) << std::endl;
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
