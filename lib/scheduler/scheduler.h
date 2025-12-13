



class Scheduler {

	public:

		Scheduler();

		void begin();
		void check();

	private:

		unsigned long _check_timer;

};

extern Scheduler scheduler;