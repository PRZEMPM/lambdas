#ifndef schedule_hpp
#define schedule_hpp

template< class Rep, class Period >
void schedule(void (*fptr)(), const std::chrono::duration<Rep, Period>& sleep_duration);

template< class Rep, class Period >
void schedule(std::function<void(int)> fptr, const std::chrono::duration<Rep, Period>& sleep_duration, int a);

template< class Rep, class Period >
void schedule(std::function<void(std::string, double)> fptr, const std::chrono::duration<Rep, Period>& sleep_duration, std::string s_schedule, double d_schedule);

#endif  /* schedule_hpp */
