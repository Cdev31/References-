#ifndef  USER_DEFINES_H
#define USER_DEFINES_H

#include <vector>
#include <string>

struct User
{
    std::string name;
    std::string email;
    std::string password;
};

std::vector<User> Users;

#endif // ! DEFINES_H