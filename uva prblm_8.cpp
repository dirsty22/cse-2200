//uva problem no 446
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int n, a, b, result;
	char c;

	cin >> n;

	while (n--){
		cin >> hex >> a >> c >> hex >> b;

		if (c == '+') result = a + b;
		else result = a - b;

		cout << bitset<13>(a) << " " << c << " " << bitset<13>(b) << " = " << result << endl;
	}

    return 0;
}
