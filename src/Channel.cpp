#include <Channel.hpp>

Channel::Channel(std::string name):
	_name(name)
{
	std::cout << "Channel " << _name << " created" << std::endl;
}

Channel::Channel(std::string name, std::string topic):
	_name(name), _topic(topic)
{
	std::cout << "Channel " << _name << " created" << std::endl;
}

Channel::~Channel( void )
{
	std::cout << "Channel " << _name << " deleted" << std::endl;
}

//function to return users in channel minus the sender
std::vector<int> Channel::getUsersNoSender(int senderId) const
{
	std::vector<int> noSender(this->_usersIds);

	removeElementFromVector(noSender, senderId);
	return noSender;
}

//function to remove users from channel
void Channel::removeUser(int UserId)
{
    removeElementFromVector(_usersIds, UserId);
}

//returns the users in a channel but just a const reference, i.e we can only edit this inside the class
const std::vector<int>& Channel::getUsers(void) const
{
	return (this->_usersIds);
}

//function to add users to channel
void Channel::addUser(int newUserId)
{
	_usersIds.push_back(newUserId);
}

void Channel::setTopic(std::string topic)
{
	_topic = topic;
}

void Channel::setName(std::string name)
{
	_name = name;
}

std::string Channel::getTopic(void) const
{
	return (_topic);
}

std::string Channel::getName(void) const
{
	return (_name);
}

const std::vector<int>& Channel::getOperators(void) const
{
	return (this->_usersIds);
}

void Channel::addOperator(int operatorId)
{
	this->_usersIds.push_back(operatorId);
}

void Channel::removeOperator(int operatorId)
{
    removeElementFromVector(_operatorsIds, operatorId);
}
