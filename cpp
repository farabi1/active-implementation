vector<int> gradingStudents(vector<int> grades) {
    if(grades>=33)
            {
            int round_remainder = ceil(grades/5);
            int next_round = round_remainder*5;
            int difference = next_round - grades;
            if(difference <= 3){
                return int[n]=next_round;
            }
            else{
                return grades;
            }
           }
    else{
      return cout<<"fail"<<endl;  
    }
}
