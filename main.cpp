/*
 * This program is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General
 * Public License along with this program. If not, see
 * <https://www.gnu.org/licenses/>.
 */
// water: calculates average monthly water bill in 4
// quarters.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double quarter1, quarter2, quarter3, quarter4;
    double total;
    const string PREFIX = "Your average monthly bill is $";
    string statement;

    cout << "Please input your water bill for quarter 1: ";
    cin >> quarter1;

    cout << "Please input your water bill for quarter 2: ";
    cin >> quarter2;

    cout << "Please input your water bill for quarter 3: ";
    cin >> quarter3;

    cout << "Please input your water bill for quarter 4: ";
    cin >> quarter4;

    total = (quarter1 + quarter2 + quarter3 + quarter4) / 12;

    if (total > 75)
        statement = "You are using excessive amounts of water.";
    else if (total >= 25 && total <= 75)
        statement = "You are using a typical amount of water.";
    else if (total < 25)
        statement = "Good job conserving water!";

    cout << setprecision(2) << fixed;

    cout << PREFIX << total << ". " << statement;

    return 0;
}