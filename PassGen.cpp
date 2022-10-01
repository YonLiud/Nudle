#include "Header.h"

static const char alphnum[] = "0123456789!@#$%^&*ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

std::string PassGen(long length)
{
    char pass[length+1];
	for (int i = 0; i < length; i++) {
        char x = alphnum[rand() % 69];
        pass[i] = x;
    }
    pass[length+1] = '\0';
    std::string s = pass;
    return s;
}
