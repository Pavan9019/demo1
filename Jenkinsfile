pipeline {
    agent none

    stages {
        stage('Build on any') {
            agent any
            steps {
                echo 'This runs on any available agent'
            }
        }

        stage('Build on labeled node') {
            agent { label 'node1' }
            steps {
                echo 'This runs only on agent with label node1'
            }
        }
    }
}
