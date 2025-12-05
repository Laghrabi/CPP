#include <iostream>
#include <string>

class Contact {
    private:
		std::string nickname;
	public:
		std::string getNickname() {
			return (nickname);
		}
		void setNickname(std::string str) {
			nickname = str;
		}
};

int main ()
{
	Contact myObj;
	std::string tmp;
    std::cout << "Enter your nickname: ";
    getline(std::cin, tmp);
	myObj.setNickname(tmp);
    std::cout << "Hello, " << myObj.getNickname();
}

