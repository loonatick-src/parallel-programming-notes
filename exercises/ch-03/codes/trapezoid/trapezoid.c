double trapezoid_rule(
		double (*func)(double),
		double left_endpoint,
		double right_endpoint,
		int trap_count,
		double base_len) {
	double estimate, x;

	estimate = (func(left_endpoint) + func(right_endpoint))/2.0;
	for (int i = 0; i < trap_count; i++) {
		x = left_endpoint + i*base_len;
		estimate += func(x);
	}

	estimate *= base_len;
	return estimate;
}
