// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// code.cpp
double calc_sum(doubles x);
extern "C" SEXP _VSCodeCpp11Demo_calc_sum(SEXP x) {
  BEGIN_CPP11
    return cpp11::as_sexp(calc_sum(cpp11::as_cpp<cpp11::decay_t<doubles>>(x)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _VSCodeCpp11Demo_calc_sum(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_VSCodeCpp11Demo_calc_sum", (DL_FUNC) &_VSCodeCpp11Demo_calc_sum, 1},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_VSCodeCpp11Demo(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
