// function of student & grade problem

#include <iostream>
using namespace std;

char getGrade(int marks)
{
    // if (marks >= 90)
    //     return 'A';

    // else if (marks >= 80)
    //     return 'B';

    // else if (marks >= 70)
    //     return 'c';

    // else if (marks >= 60)
    //     return 'D';

    // else
    //     return 'E';

    switch (marks / 10)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    default:
        return 'E';
    }
}

int main()
{

    int marks;
    cout << "Enter your mark: " << endl;
    cin >> marks;

    char finalGrade = getGrade(marks);
    cout << finalGrade << endl;

    return 0;
}