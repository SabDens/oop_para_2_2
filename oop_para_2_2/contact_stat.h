#pragma once
class Contact_stat
{
private:
    char _number[100];
    char _city[100];
    char _country[100];
public:
    Contact_stat();

    Contact_stat(const char* number, const char* city, const char* country);
    void Show() const;

};

 