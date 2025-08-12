pipeline {
    agent { label 'server2' }
    stages {
        stage('Test') {
            steps {
                sh 'hostname'
                sh 'whoami'
            }
        }
    }
}
