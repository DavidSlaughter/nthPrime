#include <iostream>
#include <vector>

void line()
{
    std::cout << std::endl;
}

int getInteger()
{
    int x{};
    do
    {
        std::cout << "\nEnter a positive integer less than 10,000: ";
        std::cin >> x;
        std::cin.ignore(3000, '\n');
    } while (x <= 0 || x > 9999);
    return x;
}

bool isPrime(int x)
{
    int m{x/2};
    for (int i{2}; i <= m; ++i)
    {
    if (x % i == 0)
    return false;
    }
    return true;
}

int nthPrime(int x)
{
    std::vector<int> primeList{};
    int i{2};
    while (primeList.size() < x)
    {
        if (isPrime(i))
        primeList.push_back(i);
        ++i;
    }
return primeList.back();
}

std::string getOrdinal(int x)
{
    int m{x/10};
    int lastDigit{x % 10};
    int secondLastDigit{m % 10};
    int lastTwoDigits {secondLastDigit*10 + lastDigit};

    switch(lastTwoDigits)
    {
        case 11:
        return "th";
        case 12:
        return "th";
        case 13:
        return "th";
    }

    switch (lastDigit)
    {
        case 0:
        return "th";
        case 1:
        return "st";
        case 2:
        return "nd";
        case 3:
        return "rd";
        case 4:
        return "th";
        case 5:
        return "th";
        case 6:
        return "th";
        case 7:
        return "th";
        case 8:
        return "th";
        case 9:
        return "th";
    }
}

void printMessage(int x)
{
    int number{nthPrime(x)};
    if (x < 10)
    {
        switch(x)
        {
            case 1:
            std::cout << "The 1st prime number is: " << number;
            break;
            case 2:
            std::cout << "The 2nd prime number is: " << number;
            break;
            case 3:
            std::cout << "The 3rd prime number is: " << number;
            break;
            case 4:
            std::cout << "The 4th prime number is: " << number;
            break;
            case 5:
            std::cout << "The 5th prime number is: " << number;
            break;
            case 6:
            std::cout << "The 6th prime number is: " << number;
            break;
            case 7:
            std::cout << "The 7th prime number is: " << number;
            break;
            case 8:
            std::cout << "The 8th prime number is: " << number;
            break;
            case 9:
            std::cout << "The 9th prime number is: " << number;
            break;
        }
    }
    else
    {
        std::cout << "The " << x << getOrdinal(x) << " prime number is: " << number;
    }

    std::cout << "\n";
}
