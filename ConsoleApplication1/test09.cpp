void g(int& r)
{
	r = 100;
}
void f(int *p)
{
	if (p) {
		g(*p);
	}
}
int main()
{
	int n;
	f(&n);
	f(nullptr);
}
