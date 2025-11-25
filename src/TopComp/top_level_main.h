#pragma once


#define WIN_EXPORT __declspec(dllexport)


#ifdef __cplusplus
extern "C"
{
#endif

WIN_EXPORT int Main_Wrapper(int argc, char *argv[]);

#ifdef __cplusplus
}
#endif