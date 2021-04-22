void changeScore(Student *stdnt, char subject, int score){
	if(subject == 'C'){
        stdnt->chinese = score;
	}
    else if(subject == 'E'){
        *stdnt.english = score;
	}
    else if(subject == 'M'){
        *stdnt.math = score;
	}
    else if(subject == 'A'){
        *stdnt.art = score;
	}
    else if(subject == 'P'){
        *stdnt.PE = score;
	}
}
