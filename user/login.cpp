#include <iostream>
#include  <string>
void login(string email, string password)
{
	if (email == "admin@domain.com" && password == "admin123")
		cout << "\n\nLogin Success. \n\n";
	else
		cout << "\n\n Login failed. \n\n";
}
int main()
{
	login("admin@domain.com", "admin123");
	return 0;
}