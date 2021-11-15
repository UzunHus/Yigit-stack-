#include <iostream> //cout i�in
#include <stack>
#include <string>
using namespace std;
void ReverseTheString(string&);//stringi tersine �evir

int main() {
	string s;
	cout << "Lutfen bir string giriniz : ";
	getline(cin, s);
	cout << "Girdiginiz stringin tersine cevrilmis hali"<<endl;
	ReverseTheString(s);
	cout << s;
	return 0;
}

void ReverseTheString(string& x) {
	stack<char> s;
	for (int i = 0;i < (int)x.length();i++)
		s.push(x[i]);
	for (int i = 0;!s.empty();i++, s.pop())
		x[i] = s.top();
}