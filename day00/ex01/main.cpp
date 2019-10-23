#include "Contacts.class.hpp"

static void set_info(Contacts *pp, std::string str, int num, int i)
{
	if (num == 1)
	pp[i].setFn(str);
	else if (num == 2)
	pp[i].setLn(str);
	else if (num == 3)
	pp[i].setNick(str);
	else if (num == 4)
	pp[i].setLogin(str);
	else if (num == 5)
	pp[i].setAdress(str);
	else if (num == 6)
	pp[i].setEmail(str);
	else if (num == 7)
	pp[i].setPhone(str);
	else if (num == 8)
	pp[i].setBday(str);
	else if (num == 9)
	pp[i].setMeal(str);
	else if (num == 10)
	pp[i].setColor(str);
	else if (num == 11)
	pp[i].setSecret(str);
}

static void add_info(Contacts *pp, int i)
{
	std::string str;
	int num = 1;

	while(num <= 11)
	{
		str.clear();
		if (num == 1)
		std::cout << "Please enter your first name:" << "\n";
		else if (num == 2)
		std::cout << "Please enter your last name:" << "\n";
		else if (num == 3)
		std::cout << "Please enter prefered nickname:" << "\n";
		else if (num == 4)
		std::cout << "Please enter your login:" << "\n";
		else if (num == 5)
		std::cout << "Please enter your postal adress:" << "\n";
		else if (num == 6)
		std::cout << "Please enter your email address:" << "\n";
		else if (num == 7)
		std::cout << "Please enter your phone number:" << "\n";
		else if (num == 8)
		std::cout << "Please enter your birthday date:" << "\n";
		else if (num == 9)
		std::cout << "What is your favorite meal?" << "\n";
		else if (num == 10)
		std::cout << "What color is your underwear?" << "\n";
		else if (num == 11)
		std::cout << "What is your darkest secret?" << "\n";
		std::getline (std::cin, str);
		set_info(pp, str, num, i);
		num++;
	}
}

static void put_header(void)
{
	std::cout << "|--|----------|----------|----------|" << "\n";
	std::cout << "|" << "ID" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << "\n";
	std::cout << "|--|----------|----------|----------|" << "\n";
}

static void cut_print(std::string str)
{
	if (str.size() > 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	std::cout << std::setw(10) << str << "|";
	str.clear();
}

static void person_info(Contacts *pp, int id)
{
	std::cout << "First name: " << pp[id].getFn() << "\n";
	std::cout << "Last name: " << pp[id].getLn() << "\n";
	std::cout << "Nickname: " << pp[id].getNick() << "\n";
	std::cout << "Login: " << pp[id].getLogin() << "\n";
	std::cout << "Address: " << pp[id].getAdress() << "\n";
	std::cout << "Email: " << pp[id].getEmail() << "\n";
	std::cout << "Phone number: " << pp[id].getPhone() << "\n";
	std::cout << "Birthday date: " << pp[id].getBday() << "\n";
	std::cout << "Favorite meal: " << pp[id].getMeal() << "\n";
	std::cout << "Underwear color: " << pp[id].getColor() << "\n";
	std::cout << "Darkest secret: " << pp[id].getSecret() << "\n\n";
}

static void search_info(Contacts *pp, int i)
{
	std::string str;
	int id = 0;

	if (i > 0)
	put_header();
	while(id < i)
	{
		std::cout << "|" << std::setw(2) << id + 1 << "|";
		str = pp[id].getFn();
		cut_print(str);
		str = pp[id].getLn();
		cut_print(str);
		str = pp[id].getNick();
		cut_print(str);
		std::cout << "\n";
		std::cout << "|--|----------|----------|----------|" << "\n";
		str.clear();
		id++;
	}
}

static void help(void)
{
	std::cout << "Welcome to a crappy phonebook!" << "\n\n";
	std::cout << "Use commands: 'HELP' - to see welcome message again." << "\n";
	std::cout << "              'ADD' - to add new contact to your phonebook." << "\n";
	std::cout << "              'SEARCH' - to show your contacts list." << "\n";
	std::cout << "              'EXIT' - to close and burn your phonebook." << "\n\n";
}


static int interact(Contacts *pp, int i)
{
	std::string str;
	std::string cmd;
	int id = 0;

	std::getline (std::cin, cmd);
	if(cmd == "ADD")
	{
		if (i <= 7)
		{
			add_info(pp, i);
			return(1);
		}
		else
			std::cout << "Sorry, but your phonebook is out of memory =(" << "\n";
	}
	else if (cmd == "SEARCH")
	{
		if(i > 0)
		{
			search_info(pp, i);
			std::cout << "Insert ID of the person whos underwear color would you like to check" << "\n";
			std::cin >> id;
			if(id > 0 && id <= 8 && i >= id)
				person_info(pp, id-1);
			else
				std::cout << "There is no contact with ID - " << id << "\n";
			interact(pp, i);
		}
		else
			std::cout << "Your phonebook is empty, use ADD comand to begin filling your first contact" << "\n";
	}
	else if (cmd == "EXIT")
		return(-1);
	else if (cmd == "HELP")
		help();
	else if (!cmd.empty())
		std::cout << "'" << cmd << "'" << " Is not a correct command. Write 'HELP' for list of valid commands.\n";
	return (0);
}

int main(void)
{
	int i = 0;
	int check = 0;
	Contacts person[8];
	Contacts *pp[8] = {&person[0], &person[1], &person[2], &person[3], &person[4], &person[5], &person[6], &person[7]};
	std::cout << "Welcome to a crappy phonebook!" << "\n\n";
	std::cout << "Use commands: 'HELP' - to see welcome message again." << "\n";
	std::cout << "              'ADD' - to add new contact to your phonebook." << "\n";
	std::cout << "              'SEARCH' - to show your contacts list." << "\n";
	std::cout << "              'EXIT' - to close and burn your phonebook." << "\n\n";
	while(i <= 8 && check != -1)
	{
		std::cout << "What would you like to do next?" << "\n";
		check = interact(*pp, i);
		if(check == 1)
			i++;
	}
	return(0);
}