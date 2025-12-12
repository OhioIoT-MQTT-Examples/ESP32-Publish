



class Scheduler {

	public:

		Scheduler();

		void begin(int, int);
		void check();

	private:

		unsigned long _check_timer;

};

extern Scheduler scheduler;