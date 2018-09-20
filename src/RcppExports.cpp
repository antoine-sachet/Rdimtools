// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// methods_boxcount
arma::mat methods_boxcount(arma::mat& tX, arma::vec& Imin, const double currentr);
RcppExport SEXP _Rdimtools_methods_boxcount(SEXP tXSEXP, SEXP IminSEXP, SEXP currentrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type tX(tXSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Imin(IminSEXP);
    Rcpp::traits::input_parameter< const double >::type currentr(currentrSEXP);
    rcpp_result_gen = Rcpp::wrap(methods_boxcount(tX, Imin, currentr));
    return rcpp_result_gen;
END_RCPP
}
// aux_numderiv
arma::vec aux_numderiv(arma::vec& x, arma::vec& y);
RcppExport SEXP _Rdimtools_aux_numderiv(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(aux_numderiv(x, y));
    return rcpp_result_gen;
END_RCPP
}
// handy_plus
arma::mat handy_plus(arma::mat& X);
RcppExport SEXP _Rdimtools_handy_plus(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(handy_plus(X));
    return rcpp_result_gen;
END_RCPP
}
// handy_hadamardABC
arma::mat handy_hadamardABC(arma::mat& A, arma::mat& B, arma::mat& C);
RcppExport SEXP _Rdimtools_handy_hadamardABC(SEXP ASEXP, SEXP BSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(handy_hadamardABC(A, B, C));
    return rcpp_result_gen;
END_RCPP
}
// handy_hadamardABCsqrt
arma::mat handy_hadamardABCsqrt(arma::mat& A, arma::mat& B, arma::mat& C);
RcppExport SEXP _Rdimtools_handy_hadamardABCsqrt(SEXP ASEXP, SEXP BSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(handy_hadamardABCsqrt(A, B, C));
    return rcpp_result_gen;
END_RCPP
}
// method_pca
Rcpp::List method_pca(arma::mat& psdX);
RcppExport SEXP _Rdimtools_method_pca(SEXP psdXSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type psdX(psdXSEXP);
    rcpp_result_gen = Rcpp::wrap(method_pca(psdX));
    return rcpp_result_gen;
END_RCPP
}
// method_mds
Rcpp::List method_mds(arma::mat& centerX);
RcppExport SEXP _Rdimtools_method_mds(SEXP centerXSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type centerX(centerXSEXP);
    rcpp_result_gen = Rcpp::wrap(method_mds(centerX));
    return rcpp_result_gen;
END_RCPP
}
// method_mdsD
Rcpp::List method_mdsD(arma::mat& D);
RcppExport SEXP _Rdimtools_method_mdsD(SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(method_mdsD(D));
    return rcpp_result_gen;
END_RCPP
}
// method_ica
Rcpp::List method_ica(arma::mat& X, const int C, const int maxiter, const double tol, const int tnum, const double tpar, bool sym);
RcppExport SEXP _Rdimtools_method_ica(SEXP XSEXP, SEXP CSEXP, SEXP maxiterSEXP, SEXP tolSEXP, SEXP tnumSEXP, SEXP tparSEXP, SEXP symSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type C(CSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type tnum(tnumSEXP);
    Rcpp::traits::input_parameter< const double >::type tpar(tparSEXP);
    Rcpp::traits::input_parameter< bool >::type sym(symSEXP);
    rcpp_result_gen = Rcpp::wrap(method_ica(X, C, maxiter, tol, tnum, tpar, sym));
    return rcpp_result_gen;
END_RCPP
}
// method_rpgauss
Rcpp::List method_rpgauss(arma::mat& X, const int k);
RcppExport SEXP _Rdimtools_method_rpgauss(SEXP XSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(method_rpgauss(X, k));
    return rcpp_result_gen;
END_RCPP
}
// method_fa
Rcpp::List method_fa(arma::mat& X, const int k, const int maxiter, const double tolerance);
RcppExport SEXP _Rdimtools_method_fa(SEXP XSEXP, SEXP kSEXP, SEXP maxiterSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(method_fa(X, k, maxiter, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// method_npe
Rcpp::List method_npe(arma::mat& X, arma::mat& W);
RcppExport SEXP _Rdimtools_method_npe(SEXP XSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(method_npe(X, W));
    return rcpp_result_gen;
END_RCPP
}
// method_olpp
arma::mat method_olpp(arma::mat& X, arma::mat& S, const int ndim);
RcppExport SEXP _Rdimtools_method_olpp(SEXP XSEXP, SEXP SSEXP, SEXP ndimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const int >::type ndim(ndimSEXP);
    rcpp_result_gen = Rcpp::wrap(method_olpp(X, S, ndim));
    return rcpp_result_gen;
END_RCPP
}
// method_bpca
Rcpp::List method_bpca(arma::mat& T, const double reltol, const int maxiter);
RcppExport SEXP _Rdimtools_method_bpca(SEXP TSEXP, SEXP reltolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(method_bpca(T, reltol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// method_trfextlpp
arma::mat method_trfextlpp(arma::mat& D, double a, double b);
RcppExport SEXP _Rdimtools_method_trfextlpp(SEXP DSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(method_trfextlpp(D, a, b));
    return rcpp_result_gen;
END_RCPP
}
// method_lspp_computeW
arma::mat method_lspp_computeW(arma::mat& S, arma::vec& svec);
RcppExport SEXP _Rdimtools_method_lspp_computeW(SEXP SSEXP, SEXP svecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type svec(svecSEXP);
    rcpp_result_gen = Rcpp::wrap(method_lspp_computeW(S, svec));
    return rcpp_result_gen;
END_RCPP
}
// method_kmmcvec
arma::vec method_kmmcvec(arma::mat& X, arma::mat& partmat, double param);
RcppExport SEXP _Rdimtools_method_kmmcvec(SEXP XSEXP, SEXP partmatSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type partmat(partmatSEXP);
    Rcpp::traits::input_parameter< double >::type param(paramSEXP);
    rcpp_result_gen = Rcpp::wrap(method_kmmcvec(X, partmat, param));
    return rcpp_result_gen;
END_RCPP
}
// method_lfda_maximaldistance
double method_lfda_maximaldistance(arma::rowvec& tvec, arma::mat& tmat);
RcppExport SEXP _Rdimtools_method_lfda_maximaldistance(SEXP tvecSEXP, SEXP tmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type tvec(tvecSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type tmat(tmatSEXP);
    rcpp_result_gen = Rcpp::wrap(method_lfda_maximaldistance(tvec, tmat));
    return rcpp_result_gen;
END_RCPP
}
// method_nnprojmax
arma::mat method_nnprojmax(arma::mat& C, arma::mat& Uinit, const double tol, const int maxiter);
RcppExport SEXP _Rdimtools_method_nnprojmax(SEXP CSEXP, SEXP UinitSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Uinit(UinitSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(method_nnprojmax(C, Uinit, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// method_nnprojmin
arma::mat method_nnprojmin(arma::mat& C, arma::mat& Uinit, const double tol, const int maxiter);
RcppExport SEXP _Rdimtools_method_nnprojmin(SEXP CSEXP, SEXP UinitSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Uinit(UinitSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(method_nnprojmin(C, Uinit, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// method_nnembedmin
arma::mat method_nnembedmin(arma::mat& M, arma::mat& Yinit, const double tol, const int maxiter);
RcppExport SEXP _Rdimtools_method_nnembedmin(SEXP MSEXP, SEXP YinitSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type M(MSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Yinit(YinitSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(method_nnembedmin(M, Yinit, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// method_sne
arma::mat method_sne(arma::mat& P, const int ndim, const double eta, const int maxiter, double jitter, double decay, const double momentum);
RcppExport SEXP _Rdimtools_method_sne(SEXP PSEXP, SEXP ndimSEXP, SEXP etaSEXP, SEXP maxiterSEXP, SEXP jitterSEXP, SEXP decaySEXP, SEXP momentumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< const double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    Rcpp::traits::input_parameter< double >::type decay(decaySEXP);
    Rcpp::traits::input_parameter< const double >::type momentum(momentumSEXP);
    rcpp_result_gen = Rcpp::wrap(method_sne(P, ndim, eta, maxiter, jitter, decay, momentum));
    return rcpp_result_gen;
END_RCPP
}
// method_snesym
arma::mat method_snesym(arma::mat& P, const int ndim, const double eta, const int maxiter, double jitter, double decay, const double momentum);
RcppExport SEXP _Rdimtools_method_snesym(SEXP PSEXP, SEXP ndimSEXP, SEXP etaSEXP, SEXP maxiterSEXP, SEXP jitterSEXP, SEXP decaySEXP, SEXP momentumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< const double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    Rcpp::traits::input_parameter< double >::type decay(decaySEXP);
    Rcpp::traits::input_parameter< const double >::type momentum(momentumSEXP);
    rcpp_result_gen = Rcpp::wrap(method_snesym(P, ndim, eta, maxiter, jitter, decay, momentum));
    return rcpp_result_gen;
END_RCPP
}
// method_tsne
arma::mat method_tsne(arma::mat& P, const int ndim, const double eta, const int maxiter, double jitter, double decay, const double momentum);
RcppExport SEXP _Rdimtools_method_tsne(SEXP PSEXP, SEXP ndimSEXP, SEXP etaSEXP, SEXP maxiterSEXP, SEXP jitterSEXP, SEXP decaySEXP, SEXP momentumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type P(PSEXP);
    Rcpp::traits::input_parameter< const int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< const double >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type jitter(jitterSEXP);
    Rcpp::traits::input_parameter< double >::type decay(decaySEXP);
    Rcpp::traits::input_parameter< const double >::type momentum(momentumSEXP);
    rcpp_result_gen = Rcpp::wrap(method_tsne(P, ndim, eta, maxiter, jitter, decay, momentum));
    return rcpp_result_gen;
END_RCPP
}
// method_eigenmaps
Rcpp::List method_eigenmaps(arma::mat& W);
RcppExport SEXP _Rdimtools_method_eigenmaps(SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(method_eigenmaps(W));
    return rcpp_result_gen;
END_RCPP
}
// method_sammon
arma::mat method_sammon(arma::mat& X, arma::mat& Yinit);
RcppExport SEXP _Rdimtools_method_sammon(SEXP XSEXP, SEXP YinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Yinit(YinitSEXP);
    rcpp_result_gen = Rcpp::wrap(method_sammon(X, Yinit));
    return rcpp_result_gen;
END_RCPP
}
// method_lleW
arma::vec method_lleW(arma::mat& mat_tgt, arma::vec& vec_tgt, const double regparam);
RcppExport SEXP _Rdimtools_method_lleW(SEXP mat_tgtSEXP, SEXP vec_tgtSEXP, SEXP regparamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type mat_tgt(mat_tgtSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type vec_tgt(vec_tgtSEXP);
    Rcpp::traits::input_parameter< const double >::type regparam(regparamSEXP);
    rcpp_result_gen = Rcpp::wrap(method_lleW(mat_tgt, vec_tgt, regparam));
    return rcpp_result_gen;
END_RCPP
}
// method_lleWauto
Rcpp::List method_lleWauto(arma::mat& mat_tgt, arma::vec& vec_tgt);
RcppExport SEXP _Rdimtools_method_lleWauto(SEXP mat_tgtSEXP, SEXP vec_tgtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type mat_tgt(mat_tgtSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type vec_tgt(vec_tgtSEXP);
    rcpp_result_gen = Rcpp::wrap(method_lleWauto(mat_tgt, vec_tgt));
    return rcpp_result_gen;
END_RCPP
}
// method_lleM
Rcpp::List method_lleM(arma::mat& W);
RcppExport SEXP _Rdimtools_method_lleM(SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(method_lleM(W));
    return rcpp_result_gen;
END_RCPP
}
// method_ree
Rcpp::List method_ree(arma::mat& B, arma::mat& W, arma::mat& D, const double initc, const double abstol, const int maxiter);
RcppExport SEXP _Rdimtools_method_ree(SEXP BSEXP, SEXP WSEXP, SEXP DSEXP, SEXP initcSEXP, SEXP abstolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const double >::type initc(initcSEXP);
    Rcpp::traits::input_parameter< const double >::type abstol(abstolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(method_ree(B, W, D, initc, abstol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// method_spe
arma::mat method_spe(arma::mat& R, arma::mat& iX, const int C, const int S, double lambda, double drate, arma::mat matselector);
RcppExport SEXP _Rdimtools_method_spe(SEXP RSEXP, SEXP iXSEXP, SEXP CSEXP, SEXP SSEXP, SEXP lambdaSEXP, SEXP drateSEXP, SEXP matselectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type iX(iXSEXP);
    Rcpp::traits::input_parameter< const int >::type C(CSEXP);
    Rcpp::traits::input_parameter< const int >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type drate(drateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type matselector(matselectorSEXP);
    rcpp_result_gen = Rcpp::wrap(method_spe(R, iX, C, S, lambda, drate, matselector));
    return rcpp_result_gen;
END_RCPP
}
// method_ispe
arma::mat method_ispe(arma::mat& R, arma::mat& iX, const int C, const int S, double lambda, double drate, arma::mat matselector, const double cutoff);
RcppExport SEXP _Rdimtools_method_ispe(SEXP RSEXP, SEXP iXSEXP, SEXP CSEXP, SEXP SSEXP, SEXP lambdaSEXP, SEXP drateSEXP, SEXP matselectorSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type R(RSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type iX(iXSEXP);
    Rcpp::traits::input_parameter< const int >::type C(CSEXP);
    Rcpp::traits::input_parameter< const int >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type drate(drateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type matselector(matselectorSEXP);
    Rcpp::traits::input_parameter< const double >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(method_ispe(R, iX, C, S, lambda, drate, matselector, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// method_crca
Rcpp::List method_crca(arma::mat& Xij, arma::mat& Yinit, double lambda, double alpha, const int maxiter, const double tolerance, arma::vec& vecselector);
RcppExport SEXP _Rdimtools_method_crca(SEXP XijSEXP, SEXP YinitSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP maxiterSEXP, SEXP toleranceSEXP, SEXP vecselectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Xij(XijSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Yinit(YinitSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type vecselector(vecselectorSEXP);
    rcpp_result_gen = Rcpp::wrap(method_crca(Xij, Yinit, lambda, alpha, maxiter, tolerance, vecselector));
    return rcpp_result_gen;
END_RCPP
}
// aux_preprocess
Rcpp::List aux_preprocess(arma::mat& X, const int flag);
RcppExport SEXP _Rdimtools_aux_preprocess(SEXP XSEXP, SEXP flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int >::type flag(flagSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_preprocess(X, flag));
    return rcpp_result_gen;
END_RCPP
}
// aux_perplexity
Rcpp::List aux_perplexity(arma::mat& X, const double perplexity);
RcppExport SEXP _Rdimtools_aux_perplexity(SEXP XSEXP, SEXP perplexitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const double >::type perplexity(perplexitySEXP);
    rcpp_result_gen = Rcpp::wrap(aux_perplexity(X, perplexity));
    return rcpp_result_gen;
END_RCPP
}
// aux_shortestpath
Rcpp::NumericMatrix aux_shortestpath(NumericMatrix& wmat);
RcppExport SEXP _Rdimtools_aux_shortestpath(SEXP wmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type wmat(wmatSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_shortestpath(wmat));
    return rcpp_result_gen;
END_RCPP
}
// aux_landmarkMaxMin
int aux_landmarkMaxMin(arma::mat& pD, arma::vec& plandmark, arma::vec& seqnp);
RcppExport SEXP _Rdimtools_aux_landmarkMaxMin(SEXP pDSEXP, SEXP plandmarkSEXP, SEXP seqnpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type pD(pDSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type plandmark(plandmarkSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type seqnp(seqnpSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_landmarkMaxMin(pD, plandmark, seqnp));
    return rcpp_result_gen;
END_RCPP
}
// aux_kernelcov
Rcpp::List aux_kernelcov(arma::mat& tX, const int knumber, const double par1, const double par2);
RcppExport SEXP _Rdimtools_aux_kernelcov(SEXP tXSEXP, SEXP knumberSEXP, SEXP par1SEXP, SEXP par2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type tX(tXSEXP);
    Rcpp::traits::input_parameter< const int >::type knumber(knumberSEXP);
    Rcpp::traits::input_parameter< const double >::type par1(par1SEXP);
    Rcpp::traits::input_parameter< const double >::type par2(par2SEXP);
    rcpp_result_gen = Rcpp::wrap(aux_kernelcov(tX, knumber, par1, par2));
    return rcpp_result_gen;
END_RCPP
}
// aux_eigendecomposition
Rcpp::List aux_eigendecomposition(arma::mat& X);
RcppExport SEXP _Rdimtools_aux_eigendecomposition(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_eigendecomposition(X));
    return rcpp_result_gen;
END_RCPP
}
// aux_minmax
arma::mat aux_minmax(arma::mat& X, const double gap);
RcppExport SEXP _Rdimtools_aux_minmax(SEXP XSEXP, SEXP gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const double >::type gap(gapSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_minmax(X, gap));
    return rcpp_result_gen;
END_RCPP
}
// aux_regout
arma::mat aux_regout(arma::mat& X, arma::rowvec tgt);
RcppExport SEXP _Rdimtools_aux_regout(SEXP XSEXP, SEXP tgtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type tgt(tgtSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_regout(X, tgt));
    return rcpp_result_gen;
END_RCPP
}
// aux_scatter
arma::mat aux_scatter(arma::mat& X, arma::rowvec& mu);
RcppExport SEXP _Rdimtools_aux_scatter(SEXP XSEXP, SEXP muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type mu(muSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_scatter(X, mu));
    return rcpp_result_gen;
END_RCPP
}
// aux_scatter_pairwise
arma::mat aux_scatter_pairwise(arma::mat& X);
RcppExport SEXP _Rdimtools_aux_scatter_pairwise(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_scatter_pairwise(X));
    return rcpp_result_gen;
END_RCPP
}
// aux_geigen
Rcpp::List aux_geigen(arma::mat& A, arma::mat& B);
RcppExport SEXP _Rdimtools_aux_geigen(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_geigen(A, B));
    return rcpp_result_gen;
END_RCPP
}
// single_bicgstab
Rcpp::List single_bicgstab(const arma::mat& A, const arma::colvec& b, arma::colvec& xinit, const double reltol, const int maxiter, const arma::mat& M);
RcppExport SEXP _Rdimtools_single_bicgstab(SEXP ASEXP, SEXP bSEXP, SEXP xinitSEXP, SEXP reltolSEXP, SEXP maxiterSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type xinit(xinitSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(single_bicgstab(A, b, xinit, reltol, maxiter, M));
    return rcpp_result_gen;
END_RCPP
}
// single_bicgstab_sparse
Rcpp::List single_bicgstab_sparse(const arma::sp_mat A, const arma::sp_mat b, arma::colvec& xinit, const double reltol, const int maxiter, const arma::sp_mat M);
RcppExport SEXP _Rdimtools_single_bicgstab_sparse(SEXP ASEXP, SEXP bSEXP, SEXP xinitSEXP, SEXP reltolSEXP, SEXP maxiterSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::colvec& >::type xinit(xinitSEXP);
    Rcpp::traits::input_parameter< const double >::type reltol(reltolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(single_bicgstab_sparse(A, b, xinit, reltol, maxiter, M));
    return rcpp_result_gen;
END_RCPP
}
// aux_mimick_geigen
Rcpp::List aux_mimick_geigen(arma::mat& A, arma::mat& B);
RcppExport SEXP _Rdimtools_aux_mimick_geigen(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_mimick_geigen(A, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rdimtools_methods_boxcount", (DL_FUNC) &_Rdimtools_methods_boxcount, 3},
    {"_Rdimtools_aux_numderiv", (DL_FUNC) &_Rdimtools_aux_numderiv, 2},
    {"_Rdimtools_handy_plus", (DL_FUNC) &_Rdimtools_handy_plus, 1},
    {"_Rdimtools_handy_hadamardABC", (DL_FUNC) &_Rdimtools_handy_hadamardABC, 3},
    {"_Rdimtools_handy_hadamardABCsqrt", (DL_FUNC) &_Rdimtools_handy_hadamardABCsqrt, 3},
    {"_Rdimtools_method_pca", (DL_FUNC) &_Rdimtools_method_pca, 1},
    {"_Rdimtools_method_mds", (DL_FUNC) &_Rdimtools_method_mds, 1},
    {"_Rdimtools_method_mdsD", (DL_FUNC) &_Rdimtools_method_mdsD, 1},
    {"_Rdimtools_method_ica", (DL_FUNC) &_Rdimtools_method_ica, 7},
    {"_Rdimtools_method_rpgauss", (DL_FUNC) &_Rdimtools_method_rpgauss, 2},
    {"_Rdimtools_method_fa", (DL_FUNC) &_Rdimtools_method_fa, 4},
    {"_Rdimtools_method_npe", (DL_FUNC) &_Rdimtools_method_npe, 2},
    {"_Rdimtools_method_olpp", (DL_FUNC) &_Rdimtools_method_olpp, 3},
    {"_Rdimtools_method_bpca", (DL_FUNC) &_Rdimtools_method_bpca, 3},
    {"_Rdimtools_method_trfextlpp", (DL_FUNC) &_Rdimtools_method_trfextlpp, 3},
    {"_Rdimtools_method_lspp_computeW", (DL_FUNC) &_Rdimtools_method_lspp_computeW, 2},
    {"_Rdimtools_method_kmmcvec", (DL_FUNC) &_Rdimtools_method_kmmcvec, 3},
    {"_Rdimtools_method_lfda_maximaldistance", (DL_FUNC) &_Rdimtools_method_lfda_maximaldistance, 2},
    {"_Rdimtools_method_nnprojmax", (DL_FUNC) &_Rdimtools_method_nnprojmax, 4},
    {"_Rdimtools_method_nnprojmin", (DL_FUNC) &_Rdimtools_method_nnprojmin, 4},
    {"_Rdimtools_method_nnembedmin", (DL_FUNC) &_Rdimtools_method_nnembedmin, 4},
    {"_Rdimtools_method_sne", (DL_FUNC) &_Rdimtools_method_sne, 7},
    {"_Rdimtools_method_snesym", (DL_FUNC) &_Rdimtools_method_snesym, 7},
    {"_Rdimtools_method_tsne", (DL_FUNC) &_Rdimtools_method_tsne, 7},
    {"_Rdimtools_method_eigenmaps", (DL_FUNC) &_Rdimtools_method_eigenmaps, 1},
    {"_Rdimtools_method_sammon", (DL_FUNC) &_Rdimtools_method_sammon, 2},
    {"_Rdimtools_method_lleW", (DL_FUNC) &_Rdimtools_method_lleW, 3},
    {"_Rdimtools_method_lleWauto", (DL_FUNC) &_Rdimtools_method_lleWauto, 2},
    {"_Rdimtools_method_lleM", (DL_FUNC) &_Rdimtools_method_lleM, 1},
    {"_Rdimtools_method_ree", (DL_FUNC) &_Rdimtools_method_ree, 6},
    {"_Rdimtools_method_spe", (DL_FUNC) &_Rdimtools_method_spe, 7},
    {"_Rdimtools_method_ispe", (DL_FUNC) &_Rdimtools_method_ispe, 8},
    {"_Rdimtools_method_crca", (DL_FUNC) &_Rdimtools_method_crca, 7},
    {"_Rdimtools_aux_preprocess", (DL_FUNC) &_Rdimtools_aux_preprocess, 2},
    {"_Rdimtools_aux_perplexity", (DL_FUNC) &_Rdimtools_aux_perplexity, 2},
    {"_Rdimtools_aux_shortestpath", (DL_FUNC) &_Rdimtools_aux_shortestpath, 1},
    {"_Rdimtools_aux_landmarkMaxMin", (DL_FUNC) &_Rdimtools_aux_landmarkMaxMin, 3},
    {"_Rdimtools_aux_kernelcov", (DL_FUNC) &_Rdimtools_aux_kernelcov, 4},
    {"_Rdimtools_aux_eigendecomposition", (DL_FUNC) &_Rdimtools_aux_eigendecomposition, 1},
    {"_Rdimtools_aux_minmax", (DL_FUNC) &_Rdimtools_aux_minmax, 2},
    {"_Rdimtools_aux_regout", (DL_FUNC) &_Rdimtools_aux_regout, 2},
    {"_Rdimtools_aux_scatter", (DL_FUNC) &_Rdimtools_aux_scatter, 2},
    {"_Rdimtools_aux_scatter_pairwise", (DL_FUNC) &_Rdimtools_aux_scatter_pairwise, 1},
    {"_Rdimtools_aux_geigen", (DL_FUNC) &_Rdimtools_aux_geigen, 2},
    {"_Rdimtools_single_bicgstab", (DL_FUNC) &_Rdimtools_single_bicgstab, 6},
    {"_Rdimtools_single_bicgstab_sparse", (DL_FUNC) &_Rdimtools_single_bicgstab_sparse, 6},
    {"_Rdimtools_aux_mimick_geigen", (DL_FUNC) &_Rdimtools_aux_mimick_geigen, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rdimtools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
