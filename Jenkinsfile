Jenkinsfile (Declarative Pipeline)
pipeline {
    agent any

    stages {
        stage('Compile') {
            steps {
                echo '1- pull from github'
                echo '2- checkout to target branch'
		echo '3- compile'
                echo '4- extract rootfs
                echo '5- install modules to rootfs'
            }
        }
        stage('zip') {
            steps {
                echo '1- copy device tree'
		echo '2- copy rootfs'
                echo '3- copy kernel Image'
                echo '4- copy bootloader'
                echo '5- generate tar.bz2'
            }
        }
    }
}
