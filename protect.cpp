#include <iostream>
#include <Windows.h>
#include <future>
#include <string>
#include <tuple>


#define K1 "3K}=1"
#define K2 "!~#zH"

void WHOISHERE(int x)
{
	while (1)
	{
		if (IsDebuggerPresent())
		{
			MessageBoxA(NULL, "Yberi debugger", "Debug-Policia", 0);
		}
		Sleep(500);
	}
}

class CLS
{
public:
	CLS(std::string login, std::string password) 
	{
		this->login = login;
		this->password = password;
		auto f = std::async(WHOISHERE, -771);
		spoof();
	};
private:
	std::string login = "";
	std::string password = "";
	std::string* dda;
	std::string* aaa;
	std::string* gfd;
	std::string* fri;
	std::string** fds;
	std::string** ofp;
	std::string*** okm;
	std::string*** dgr;
	std::string**** mht;
	std::string**** ytf;
	std::string***** gds;
	std::string***** pol;

	int o = 0;
	int oo = 0;

	void spoof()
	{
		dda = &login;
		aaa = &password;
		
		for (const auto& x : *aaa) 
		{
			o += int(x) % (*aaa).size();
			oo -= int(x) % (*dda).size();
		}

		for (const auto& y : *dda)
		{
			o += (int(y) % (*dda).size()) - (int(y) % (*aaa).size());
			oo -= (int(y) % (*aaa).size()) - (int(y) % (*dda).size());;
		}

		login = std::to_string(o);
		password = std::to_string(oo);

		gfd = &login;
		fri = &password;
		fds = &fri;
		ofp = &gfd;
		okm = &ofp;
		dgr = &fds;
		mht = &dgr;
		ytf = &okm;
		gds = &ytf;
		pol = &mht;

		if (std::stoi(*****gds) == key().first && std::stoi(*****pol) == key().second) 
		{
			printf("\x55""s\145r\x6E""a\155e\x20""a\156d\x20""p\141s\x73""w\157r\x64"" \141r\x65"" \143o\x72""r\145c\x74"".\040W\x65""l\143o\x6D""e\012");
		}
		else
		{
			std::cout << "\x46""a\151l\x65""d\040t\x6F"" \154o\x67""i\156\x0A";
			exit(-1);
		}

	}

	std::pair<int,int> key()
	{
		bool direction = false;
		int k1 = 0, k2 = 0;
		for (const auto& x : K1) 
		{
			direction == 0 ? k1 += int(x) : k1 -= int(x);
			direction = !direction;
		}
		direction = false;
		for (const auto& y : K2) 
		{
			direction == 0 ? k2 += int(y) : k2 -= int(y);
			direction = !direction;
		}
		
		return std::make_pair(k1, k2);
	}
};

int main()
{

	std::string l = "";
	std::string p = "";
	std::cin >> l;
	std::cin >> p;

	CLS cls = CLS(l,p);

	return 0;
}