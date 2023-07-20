#ifndef	CHANNEL_HPP
# define CHANNEL_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class	Channel
{
	private:
		std::string _name;
		std::string _topic;
		std::vector<int> _usersIds;

	public:
		Channel(std::string name);
		Channel(std::string name, std::string topic);
		~Channel( void );
		std::vector<int> getUsersNoSender(int senderId) const; 
		const std::vector<int>& getUsers(void) const;
		void addUser(int newUserId);
		void removeUser(int UserId);
		void setTopic(std::string topic);
		void setName(std::string name);
		std::string getTopic(void) const;
		std::string getName(void) const;
};

#endif