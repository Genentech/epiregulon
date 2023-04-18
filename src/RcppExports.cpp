// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// fast_chisq
Rcpp::List fast_chisq(Rcpp::IntegerVector peak_ordered, Rcpp::IntegerVector tf_by_peak, Rcpp::IntegerVector target_by_peak, Rcpp::IntegerVector target_ordered, int npeaks, Rcpp::NumericVector peakmat_x, Rcpp::IntegerVector peakmat_i, Rcpp::IntegerVector peakmat_p, double peak_cutoff, int ngenes, Rcpp::NumericVector expmat_x, Rcpp::IntegerVector expmat_i, Rcpp::IntegerVector expmat_p, double exp_cutoff, int nclusters, Rcpp::IntegerVector clusters);
RcppExport SEXP _epiregulon_fast_chisq(SEXP peak_orderedSEXP, SEXP tf_by_peakSEXP, SEXP target_by_peakSEXP, SEXP target_orderedSEXP, SEXP npeaksSEXP, SEXP peakmat_xSEXP, SEXP peakmat_iSEXP, SEXP peakmat_pSEXP, SEXP peak_cutoffSEXP, SEXP ngenesSEXP, SEXP expmat_xSEXP, SEXP expmat_iSEXP, SEXP expmat_pSEXP, SEXP exp_cutoffSEXP, SEXP nclustersSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type peak_ordered(peak_orderedSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type tf_by_peak(tf_by_peakSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type target_by_peak(target_by_peakSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type target_ordered(target_orderedSEXP);
    Rcpp::traits::input_parameter< int >::type npeaks(npeaksSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type peakmat_x(peakmat_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type peakmat_i(peakmat_iSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type peakmat_p(peakmat_pSEXP);
    Rcpp::traits::input_parameter< double >::type peak_cutoff(peak_cutoffSEXP);
    Rcpp::traits::input_parameter< int >::type ngenes(ngenesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type expmat_x(expmat_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type expmat_i(expmat_iSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type expmat_p(expmat_pSEXP);
    Rcpp::traits::input_parameter< double >::type exp_cutoff(exp_cutoffSEXP);
    Rcpp::traits::input_parameter< int >::type nclusters(nclustersSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type clusters(clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_chisq(peak_ordered, tf_by_peak, target_by_peak, target_ordered, npeaks, peakmat_x, peakmat_i, peakmat_p, peak_cutoff, ngenes, expmat_x, expmat_i, expmat_p, exp_cutoff, nclusters, clusters));
    return rcpp_result_gen;
END_RCPP
}
// fast_wilcox
Rcpp::List fast_wilcox(Rcpp::NumericVector exprs_x, Rcpp::IntegerVector exprs_i, Rcpp::IntegerVector exprs_p, Rcpp::NumericVector peak_x, Rcpp::IntegerVector peak_i, Rcpp::IntegerVector peak_p, Rcpp::IntegerVector target_id, Rcpp::IntegerVector tf_id, Rcpp::IntegerVector peak_id, Rcpp::IntegerVector clusters, int ngroups);
RcppExport SEXP _epiregulon_fast_wilcox(SEXP exprs_xSEXP, SEXP exprs_iSEXP, SEXP exprs_pSEXP, SEXP peak_xSEXP, SEXP peak_iSEXP, SEXP peak_pSEXP, SEXP target_idSEXP, SEXP tf_idSEXP, SEXP peak_idSEXP, SEXP clustersSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type exprs_x(exprs_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type exprs_i(exprs_iSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type exprs_p(exprs_pSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type peak_x(peak_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type peak_i(peak_iSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type peak_p(peak_pSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type target_id(target_idSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type tf_id(tf_idSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type peak_id(peak_idSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< int >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_wilcox(exprs_x, exprs_i, exprs_p, peak_x, peak_i, peak_p, target_id, tf_id, peak_id, clusters, ngroups));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP to_end(void *, void *, void *, void *);
RcppExport SEXP to_start(void *, void *, void *, void *);

static const R_CallMethodDef CallEntries[] = {
    {"_epiregulon_fast_chisq", (DL_FUNC) &_epiregulon_fast_chisq, 16},
    {"_epiregulon_fast_wilcox", (DL_FUNC) &_epiregulon_fast_wilcox, 11},
    {"to_end",   (DL_FUNC) &to_end,   4},
    {"to_start", (DL_FUNC) &to_start, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_epiregulon(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
