#include <iostream>

using namespace std;
// �������� ��������� ����������� �������� �� ����� ���������. � ��������� �������������, ��� ����� - �����������
int main () {
unsigned int a;
cin >> a;
if (a==1) {cout << "Unit"; }
else {for (int i = 2; i<a; i++) {
    if (a%i==0){cout << "Composite"; return 0; }
    else {cout << "Prime"; return 0; }
    return 0;

    }
    }
}

