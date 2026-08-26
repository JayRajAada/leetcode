class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for (string& op : operations) {
            if (op == "+") {
                record.push_back(record.back() + record[record.size() - 2]);
            } else if (op == "D") {
                record.push_back(record.back() * 2);
            } else if (op == "C") {
                record.pop_back();
            } else {
                record.push_back(stoi(op));
            }
        }
        return accumulate(record.begin(), record.end(), 0);
    }
};