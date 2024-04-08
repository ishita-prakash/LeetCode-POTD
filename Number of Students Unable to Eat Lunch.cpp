// BEATS 100%
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        //circular - 0, square - 1
        int n = students.size(), m = sandwiches.size();

        int cnt = 0, i = 0, j = 0;

        while(cnt < n && !students.empty()){
            if(students[0] == sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                cnt = 0;
            }

            else{
                cnt++;
                rotate(students.begin(), students.begin() + 1, students.end());
            }
        }

        if(cnt == n)
            return students.size();
        else
            return 0;
    }
};
