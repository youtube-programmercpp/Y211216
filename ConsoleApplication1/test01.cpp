//拡張子 .cpp であれば C++
//拡張子 .c   であれば C言語
//リンケージ指定
extern "C" void test02();//宣言
int main()
{
	test02();
}
//基本的に C 言語は C++ に含まれる
//「識別子」 identifier “名前”
//「シンボル」 symbol 記号のことだが、これは変数名、関数名のこと
