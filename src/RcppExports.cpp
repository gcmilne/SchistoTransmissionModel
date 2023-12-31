// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// RunModel
List RunModel(NumericVector theta, int runtime, double stepsize, int alltimes, NumericVector tx_pars, NumericVector tx_times, NumericVector coverage_data);
RcppExport SEXP _SchistoTransmissionModel_RunModel(SEXP thetaSEXP, SEXP runtimeSEXP, SEXP stepsizeSEXP, SEXP alltimesSEXP, SEXP tx_parsSEXP, SEXP tx_timesSEXP, SEXP coverage_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type runtime(runtimeSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    Rcpp::traits::input_parameter< int >::type alltimes(alltimesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tx_pars(tx_parsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tx_times(tx_timesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type coverage_data(coverage_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(RunModel(theta, runtime, stepsize, alltimes, tx_pars, tx_times, coverage_data));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SchistoTransmissionModel_RunModel", (DL_FUNC) &_SchistoTransmissionModel_RunModel, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_SchistoTransmissionModel(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
