;;;
;;; Test bpf
;;;

(use gauche.test)

(test-start "bpf")
(use bpf)
(test-module 'bpf)

;; The following is a dummy test code.
;; Replace it for your tests.
(test* "test-bpf" "bpf is working"
       (test-bpf))

;; If you don't want `gosh' to exit with nonzero status even if
;; the test fails, pass #f to :exit-on-failure.
(test-end :exit-on-failure #t)




