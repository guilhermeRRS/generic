class ChronosTimer {

    public:
        string timerName;
        time_t startTime;
        time_t endTime;

        bool valid() {
            return time() - startTime < endTime;
        }

        bool valid(time_t otherEnd) {
            return time() - startTime < otherEnd;
        }


}