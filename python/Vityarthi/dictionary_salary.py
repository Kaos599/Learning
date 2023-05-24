"""A startup company named 'MY_Chat' having four employees names as Sunny, Ravi, Vijay and
Messi having the respected salaries are 25000,23000, 26000, and 30000.
After six months, Sunny resigned from his job. Update data based on employee name.
Input format: Sunny
Output format: all employee data after update
"""


salary = {"sunny": 25000, "ravi": 230000, "vijay": 260000, "messi": 300000}
resign = input("Enter the name of the employee that resigned:")
del salary[resign.lower()]
print(salary)
