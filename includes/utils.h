//sort the data
	sortData(SORT_ORDER::START_TIME,myProcesses);

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(vector<process> &myProcesses){
	process p;
	return p;

    //returns the number of entries in the vector
int getSize(vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(vector<process> &myProcesses){
	return NO_DATA_TO_WORK_ON;
}