class Chronos {


    public:

        string chronosName;
        vector<ChronosTimer> timers;

        Chronos(string chronosName){
            this.chronosName = chronosName;
        }

        bool topValid(){
            if (lenght(timers) == 0){
                InvalidOperation();
            }

            return timers[-1].valid();
        }

        bool searchValid(int i){
            if(i >= lenght(timers)){
                InvalidOperation();
            }

            return timers[i].valid();
        }

        bool searchValid(string timerName){

            for (ChronosTimer &timer : timers) {  
                if (timer.timerName == timerName)
                {
                    return timer.valid();
                }
            }

            InvalidOperation();

        }

}