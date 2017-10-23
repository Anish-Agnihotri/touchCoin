# CMake generated Testfile for 
# Source directory: /root/cryptonote-master/tests
# Build directory: /root/cryptonote-master/build/release/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(CoreTests "core_tests" "--generate_and_play_test_data")
ADD_TEST(CryptoTests "crypto_tests" "/root/cryptonote-master/tests/crypto/tests.txt")
ADD_TEST(DifficultyTests "difficulty_tests" "/root/cryptonote-master/tests/Difficulty/data.txt")
ADD_TEST(hash-fast "hash_tests" "fast" "/root/cryptonote-master/tests/Hash/tests-fast.txt")
ADD_TEST(hash-slow "hash_tests" "slow" "/root/cryptonote-master/tests/Hash/tests-slow.txt")
ADD_TEST(hash-tree "hash_tests" "tree" "/root/cryptonote-master/tests/Hash/tests-tree.txt")
ADD_TEST(hash-extra-blake "hash_tests" "extra-blake" "/root/cryptonote-master/tests/Hash/tests-extra-blake.txt")
ADD_TEST(hash-extra-groestl "hash_tests" "extra-groestl" "/root/cryptonote-master/tests/Hash/tests-extra-groestl.txt")
ADD_TEST(hash-extra-jh "hash_tests" "extra-jh" "/root/cryptonote-master/tests/Hash/tests-extra-jh.txt")
ADD_TEST(hash-extra-skein "hash_tests" "extra-skein" "/root/cryptonote-master/tests/Hash/tests-extra-skein.txt")
ADD_TEST(HashTargetTests "hash_target_tests")
ADD_TEST(SystemTests "system_tests")
ADD_TEST(UnitTests "unit_tests")
