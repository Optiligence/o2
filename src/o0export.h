#pragma once

// For exporting symbols from Windows' DLLs
#ifdef O2_DLL_EXPORT
    #define O0_EXPORT __declspec(dllexport)
#elif O2_DLL_IMPORT
    #define O0_EXPORT __declspec(dllimport)
#else
    #define O0_EXPORT
#endif
