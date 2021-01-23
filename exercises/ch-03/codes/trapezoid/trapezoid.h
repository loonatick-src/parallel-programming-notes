#ifndef TRAPEZOID_H
#define TRAPEZOID_H

double trapezoid_rule(
		double (*func)(double),
		double left_endpoint,
		double right_endpoint,
		int trap_count,
		double base_len);

#endif
