#pragma once
#include <chrono>
#include <thread>
#include <functional>

void schedule(std::function<void()> fptr, const std::chrono::seconds sleep_duration)
{
    std::this_thread::sleep_for(sleep_duration);
    fptr();
}

void schedule(std::function<void(int)> fptr, const std::chrono::seconds sleep_duration, int a)
{
    std::this_thread::sleep_for(sleep_duration);
    fptr(a);
}

void schedule(std::function<void(std::string, double)> fptr, const std::chrono::seconds sleep_duration, std::string s_schedule, double d_schedule)
{
    std::this_thread::sleep_for(sleep_duration);
    fptr(s_schedule, d_schedule);
}
